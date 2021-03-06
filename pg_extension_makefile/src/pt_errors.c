/*
 * pt_errors.c
 */

#include "pt_errors.h"

const pt_error_msg pt_error_msgs[] = {
		{ NO_ERROR,
		"No Error occurred."},
		{ PERIOD_START_BEFORE_END,
		"A valid period's begin instant is before the end instant."	},
		{ PRIMITIVES_MUST_BE_OF_HOMOGENOUS_TYPE,
		"Primitives must be of homogeneous type." },
		{ PERIOD_CAN_ONLY_CONTAIN_SINGLE_SLASH,
		"Syntax error: an valid period can only contain one '/'."},
		{ AN_INSTANT_STRING_ENDS_WITH_DELIMITER,
		"Syntax error: an instant-string can not end with a ISO8601-delimiter as '-','T' or ':' ."},
		{ CAN_NOT_PARSE_SECONDS,
		"Syntax error: error while trying to parse seconds."},
		{ CAN_NOT_PARSE_INTEGER_VALUE,
		"Syntax error: error while trying to parse a single year, month, day, hour, or minute."},
		{ CALENDAR_SYSTEM_NOT_FOUND ,
		"A calendar system with the given id is unknown."},
		{ CAN_NOT_PARSE_TCS_VALUE ,
		"Syntax error: within a temporal coordinate system an instant is defined by a single floating point number." } ,
		{ TCS_SYSTEM_NOT_FOUND ,
		"A temporal coordinate system with the given id is unknown."},
		{ SPECIFY_ONLY_THE_NEW_SYSTEM ,
		"Please specify only the new reference system."},
		{ ORD_SYSTEM_NOT_FOUND ,
		"An ordinal system with the given id is unknown."},
		{ ORD_ERA_UNKNOWN ,
		"The given ordinal-era-key is unknown in the specified system."}
};

