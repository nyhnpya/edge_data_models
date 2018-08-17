DELIMITER $$

DROP PROCEDURE IF EXISTS `spInsertObjective` $$
CREATE DEFINER=`carrier`@`%` PROCEDURE `spInsertObjective`(
       IN p_id          VARCHAR(36),
       IN p_parentId    VARCHAR(36),
       IN p_objective   INTEGER
)
BEGIN

INSERT INTO objective
(
	id,
	parent_id,
	objective
)

VALUES
(
	p_id,
	p_parentId,
	p_objective
);

END $$

DELIMITER ;
