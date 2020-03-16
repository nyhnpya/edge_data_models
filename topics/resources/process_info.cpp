#ifdef __linux__
  #include <stdio.h>
  #include <stdint.h>
  #include <stdlib.h>
  #include <string.h>
  #include <unistd.h>
  #include <sys/types.h>
  #include <sys/stat.h>
  #include <fcntl.h>
  #include <time.h>
  #include <sys/time.h>
  #include <bits/stdc++.h>
  #include <sys/time.h>
  #include "process_info.h"
#elif _WIN32
  #define _CRT_SECURE_NO_WARNINGS
  #include <windows.h>
  #include <chrono>
  #include <string>
  #include <psapi.h>
  #include <tlhelp32.h>
  #include <stdio.h>
  #include <stdint.h>
  #include "process_info.h"
#endif // __linux__

using namespace std::chrono;

#ifdef __linux__
typedef struct _proc_self_stat
{
    int32_t pid;
    char comm[256];
    char state;
    int32_t ppid;
    int32_t pgrp;
    int32_t session;
    int32_t tty_nr;
    int32_t tpgid;
    uint32_t flags;
    long unsigned int minflt;
    long unsigned int cminflt;
    long unsigned int majflt;
    long unsigned int cmajflt;
    long unsigned int utime;
    long unsigned int stime;
    long int cutime;
    long int cstime;
    long int priority;
    long int nice;
    long int num_threads;
    long int itrealvalue;
    unsigned long long starttime;
    unsigned long vsize;
    long int rss;
    unsigned long rsslim;
    unsigned long startcode;
    unsigned long endcode;
    unsigned long startstack;
    unsigned long kstkesp;
    unsigned long kstkeip;
    unsigned long signal;
    unsigned long blocked;
    unsigned long sigignore;
    unsigned long sigcatch;
    unsigned long wchan;
    unsigned long nswap;
    unsigned long cnswap;
    int32_t exit_signal;
    int32_t processor;
    uint32_t rt_priority;
    uint32_t policy;
    unsigned long long int delayacct_blkio_ticks;
    unsigned long int guest_time;
    long int cguest_time;
    unsigned long start_data;
    unsigned long end_data;
    unsigned long start_brk;
    unsigned long arg_start;
    unsigned long arg_end;
    unsigned long env_start;
    unsigned long env_end;
    int exit_code;
} proc_self_stat;

typedef struct _proc_self_status
{
    int32_t VmPeak;
    int32_t VmSize;
    int32_t VmSwap;
    int32_t Threads;
} proc_self_status;

typedef struct _process_info
{
    long     pid;
    char     processName[128];
    time_t   upTime;
    uint64_t kTime;
    uint64_t uTime;
    double   vmPeak;
    double   vmSize;
    double   vmSwap;
    double   vmMaxSwap;
    int32_t  threads;
    char     uname[256];
} process_info;

int get_process_info(process_info *ppi)
{
    char file_contents[1024];
    FILE* fp;
    proc_self_stat pss;
    char * line = nullptr;
    size_t len = 0;
    ssize_t read;
    proc_self_status ps_status;
    char word1[32];
    char word2[32];
    char word3[32];
    double uptime;
    double idletime;
    struct timeval tv;
    time_t boottime = 0;

    // Get System Uptime
    fp = fopen("/proc/uptime", "r");
    if (fp == nullptr)
        return -1;
    //        exit(EXIT_FAILURE);
    fgets(file_contents, 1023, fp);
    sscanf(file_contents, "%lf %lf\n", &uptime, &idletime);
    gettimeofday(&tv, 0);
    boottime = tv.tv_sec - (time_t)uptime;
    fclose(fp);

    fp = fopen("/proc/self/stat", "r");
    if (fp == nullptr)
        return -1;
    //        exit(EXIT_FAILURE);
    fgets(file_contents, 1023, fp);
    sscanf(file_contents, "\
        %d %s %c %d %d %d %d %d %u %lu \
        %lu %lu %lu %lu %lu %ld %ld %ld %ld %ld \
        %ld %llu %lu %ld %lu %lu %lu %lu %lu %lu \
        %lu %lu %lu %lu %lu %lu %lu %d %d %u \
        %u %llu %lu %ld %lu %lu %lu %lu %lu %lu \
        %lu %d",
           &pss.pid, pss.comm, &pss.state, &pss.ppid, &pss.pgrp, &pss.session, &pss.tty_nr, &pss.tpgid, &pss.flags, &pss.minflt, &pss.cminflt, &pss.majflt, &pss.cmajflt, &pss.utime, &pss.stime, &pss.cutime, &pss.cstime, &pss.priority, &pss.nice, &pss.num_threads, &pss.itrealvalue, &pss.starttime, &pss.vsize, &pss.rss, &pss.rsslim, &pss.startcode, &pss.endcode, &pss.startstack, &pss.kstkesp, &pss.kstkeip, &pss.signal, &pss.blocked, &pss.sigignore, &pss.sigcatch, &pss.wchan, &pss.nswap, &pss.cnswap, &pss.exit_signal, &pss.processor, &pss.rt_priority,
           &pss.policy, &pss.delayacct_blkio_ticks, &pss.guest_time, &pss.cguest_time, &pss.start_data, &pss.end_data, &pss.start_brk, &pss.arg_start, &pss.arg_end, &pss.env_start,
           &pss.env_end, &pss.exit_code);
    fclose(fp);

    time_t now = std::time(0);
    time_t lapsed = (time_t)(now - (boottime + (pss.starttime/sysconf(_SC_CLK_TCK))));


    ppi->pid = pss.pid;
    if (pss.comm[strlen(pss.comm)-1] == ')')
    {
        pss.comm[strlen(pss.comm)-1] = '\0';
    }
    if (pss.comm[0] == '(')
    {
        strcpy(ppi->processName, &pss.comm[1]);
    }
    else
    {
        strcpy(ppi->processName, pss.comm);
    }
    ppi->upTime = lapsed;
    ppi->kTime = pss.stime;// / sysconf(_SC_CLK_TCK);
    ppi->uTime = pss.utime;// / sysconf(_SC_CLK_TCK);

    fp = fopen("/proc/self/status", "r");
    if (fp == nullptr)
        return -1;
    //        exit(EXIT_FAILURE);
    while ((read = getline(&line, &len, fp)) != -1)
    {
        if (strstr(line, "VmPeak") != nullptr)
        {
            sscanf(line, "%s %s %s", word1, word2, word3);
            ps_status.VmPeak = atoi(word2);
        }
        if (strstr(line, "VmSize") != nullptr)
        {
            sscanf(line, "%s %s %s", word1, word2, word3);
            ps_status.VmSize = atoi(word2);
        }
        if (strstr(line, "VmSwap") != nullptr)
        {
            sscanf(line, "%s %s %s", word1, word2, word3);
            ps_status.VmSwap = atoi(word2);
        }
        if (strstr(line, "Threads") != nullptr)
        {
            sscanf(line, "%s %s", word1, word2);
            ps_status.Threads = atoi(word2);
        }
    }
    fclose(fp);
    if (line)
        free(line);

    ppi->vmPeak = ps_status.VmPeak / 1024.0;
    ppi->vmSize = ps_status.VmSize / 1024.0;
    ppi->vmSwap = ps_status.VmSwap / 1024.0;
    ppi->vmMaxSwap = 0;
    ppi->threads = ps_status.Threads;

    FILE* fpOS = popen("uname -a", "r");
    char osname[256];

    fgets(osname, 255, fpOS);
    pclose(fpOS);
    if (osname[strlen(osname)-1] == '\n')
    {
        osname[strlen(osname)-1] = '\0';
    }

    strcpy(ppi->uname, osname);

    return 0;
}

CProcessInfo::CProcessInfo() :
    m_lastRunUserTime(0),
    m_lastRunKernelTime(0)
{
}

CProcessInfo::~CProcessInfo()
{
}

void CProcessInfo::GetInfo(ProcessStats *pProcessStats)
{
    process_info pi;
    get_process_info(&pi);

    time_point<high_resolution_clock> runTime = high_resolution_clock::now();
    double runTimeDiff = (double)((pi.kTime + pi.uTime) -
                                  (m_lastRunUserTime + m_lastRunKernelTime));
    duration<double> timeDiff = (runTime - m_lastRunTime);

    m_lastRunKernelTime = pi.kTime;
    m_lastRunUserTime = pi.uTime;
    m_lastRunTime = runTime;

    pProcessStats->pid = pi.pid;
    strcpy(pProcessStats->processName, pi.processName);
    pProcessStats->upTime = (double)pi.upTime;
    pProcessStats->cpuUsagePercent = ((((runTimeDiff / (double)(sysconf(_SC_CLK_TCK))) / timeDiff.count())) * 100.0);
    pProcessStats->vmPeak = pi.vmPeak;
    pProcessStats->vmSize = pi.vmSize;
    pProcessStats->vmMaxSwap = pi.vmMaxSwap;
    pProcessStats->vmSwap = pi.vmSwap;
    pProcessStats->threads = pi.threads;
    strcpy(pProcessStats->uname, pi.uname);
}

#elif _WIN32
void GetMemoryInfo(DWORD processID, uint64_t *pPeakMem, uint64_t *pMem, uint64_t *pPeakSwap, uint64_t *pSwap)
{
    HANDLE hProcess;
    PROCESS_MEMORY_COUNTERS pmc;

    hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, processID);

    if (hProcess == nullptr)
    {
        return;
    }

    *pPeakMem = 0;
    *pMem = 0;
    *pPeakSwap = 0;
    *pSwap = 0;

    if (GetProcessMemoryInfo(hProcess, &pmc, sizeof(pmc)))
    {
        *pPeakMem = pmc.PeakWorkingSetSize;
        *pMem = pmc.WorkingSetSize;
        *pPeakSwap = pmc.PeakPagefileUsage;
        *pSwap = pmc.PagefileUsage;
    }

    CloseHandle(hProcess);
}

uint64_t to_uint64t(FILETIME ft)
{
    return static_cast<uint64_t>(ft.dwHighDateTime) << 32 | ft.dwLowDateTime;
}

int32_t GetCurrentThreadCount()
{
    // first determine the id of the current process
    DWORD const  id = GetCurrentProcessId();

    // then get a process list snapshot.
    HANDLE const  snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, 0);

    // initialize the process entry structure.
    PROCESSENTRY32 entry = { 0 };
    entry.dwSize = sizeof(entry);

    // get the first process info.
    BOOL  ret = true;
    ret = Process32First(snapshot, &entry);
    while (ret && entry.th32ProcessID != id) {
        ret = Process32Next(snapshot, &entry);
    }
    CloseHandle(snapshot);
    return ret ? entry.cntThreads : -1;
}

CProcessInfo::CProcessInfo(void)
{
}

CProcessInfo::~CProcessInfo(void)
{
}

std::string get_os()
{
    OSVERSIONINFO os;
    ZeroMemory(&os, sizeof(OSVERSIONINFO));
    os.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    GetVersionEx(&os);
    std::string uname = "Windows ";
    if (os.dwMajorVersion == 10)
        uname += "10";
    else if (os.dwMajorVersion == 6){
        if (os.dwMinorVersion == 3)
            uname += "8.1";
        else if (os.dwMinorVersion == 2)
            uname += "8";
        else if (os.dwMinorVersion == 1)
            uname += "7";
        else
            uname += "Vista";
    }
    else if (os.dwMajorVersion == 5){
        if (os.dwMinorVersion == 2)
            uname += "XP SP2";
        else if (os.dwMinorVersion == 1)
            uname += "XP";
    }
    return uname;
}

void CProcessInfo::GetInfo(ProcessStats *pProcessStats)
{
    TCHAR szFileName[MAX_PATH + 1];
    char c_szText[MAX_PATH + 1];

    GetModuleFileName(nullptr, szFileName, MAX_PATH + 1);
    wcstombs(c_szText, szFileName, wcslen(szFileName) + 1);
    char name[256];
    strcpy(name, c_szText);

    for (int ii = (int)strlen(c_szText) - 1; ii >= 0; ii--)
    {
        if (c_szText[ii] == '\\' || c_szText[ii] == '/')
        {
            strcpy(name, &c_szText[ii + 1]);
            break;
        }
    }

    strncpy(pProcessStats->uname, get_os().c_str(), 255);
    
    HANDLE process = GetCurrentProcess();
    FILETIME CreationTime;
    FILETIME ExitTime;
    FILETIME KernelTime;
    FILETIME UserTime;
    SYSTEMTIME systemtime;

    GetSystemTime(&systemtime);
    FILETIME SystemTime;
    SystemTimeToFileTime(&systemtime, &SystemTime);

    time_point<high_resolution_clock> runTime = high_resolution_clock::now();

    GetProcessTimes(process, &CreationTime, &ExitTime, &KernelTime, &UserTime);

    uint64_t ctime = to_uint64t(CreationTime);
    uint64_t stime = to_uint64t(SystemTime);
    uint64_t uptime = stime - ctime;
    uint64_t etime = to_uint64t(ExitTime);
    uint64_t ktime = to_uint64t(KernelTime);
    uint64_t utime = to_uint64t(UserTime);

    uint64_t runTimeDiff = (ktime + utime) - (m_lastRunUserTime + m_lastRunKernelTime);
    duration<double> timeDiff = (runTime - m_lastRunTime);

    m_lastRunKernelTime = ktime;
    m_lastRunUserTime = utime;
    m_lastRunTime = runTime;

    DWORD processID = GetCurrentProcessId();
    uint64_t PeakMem, Mem, PeakSwap, Swap;
    GetMemoryInfo(processID, &PeakMem, &Mem, &PeakSwap, &Swap);

    pProcessStats->pid = processID;
    strcpy(pProcessStats->processName, name);
    pProcessStats->upTime = uptime / (10000000.0);
    pProcessStats->cpuUsagePercent = ((runTimeDiff / (10000000.0)) / timeDiff.count()) * 100.0;
    pProcessStats->vmPeak = PeakMem / (1024.0 * 1024.0);
    pProcessStats->vmSize = Mem / (1024.0 * 1024.0);
    pProcessStats->vmMaxSwap = PeakSwap / (1024.0 * 1024.0);
    pProcessStats->vmSwap = Swap / (1024.0 * 1024.0);
    pProcessStats->threads = GetCurrentThreadCount();
}
#endif
