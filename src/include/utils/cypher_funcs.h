/*
 * cypher_funcs.h
 *	  Functions in Cypher expressions.
 *
 * Copyright (c) 2017 by Bitnine Global, Inc.
 *
 * src/include/utils/cypher_funcs.h
 */

#ifndef CYPHER_FUNCS_H
#define CYPHER_FUNCS_H

#include "fmgr.h"

/* scalar */
extern Datum jsonb_head(PG_FUNCTION_ARGS);
extern Datum jsonb_last(PG_FUNCTION_ARGS);
extern Datum jsonb_length(PG_FUNCTION_ARGS);
extern Datum jsonb_toboolean(PG_FUNCTION_ARGS);

/* list */
extern Datum jsonb_keys(PG_FUNCTION_ARGS);
extern Datum jsonb_tail(PG_FUNCTION_ARGS);

/* mathematical */
extern Datum percentilecont(PG_FUNCTION_ARGS);
extern Datum percentiledisc(PG_FUNCTION_ARGS);

/* mathematical - numeric */
extern Datum jsonb_abs(PG_FUNCTION_ARGS);
extern Datum jsonb_ceil(PG_FUNCTION_ARGS);
extern Datum jsonb_floor(PG_FUNCTION_ARGS);
extern Datum jsonb_rand(PG_FUNCTION_ARGS);
extern Datum jsonb_round(PG_FUNCTION_ARGS);
extern Datum jsonb_sign(PG_FUNCTION_ARGS);

/* mathematical - logarithmic */
extern Datum jsonb_exp(PG_FUNCTION_ARGS);
extern Datum jsonb_log(PG_FUNCTION_ARGS);
extern Datum jsonb_log10(PG_FUNCTION_ARGS);
extern Datum jsonb_sqrt(PG_FUNCTION_ARGS);

/* mathematical - trigonometric */
extern Datum jsonb_acos(PG_FUNCTION_ARGS);
extern Datum jsonb_asin(PG_FUNCTION_ARGS);
extern Datum jsonb_atan(PG_FUNCTION_ARGS);
extern Datum jsonb_atan2(PG_FUNCTION_ARGS);
extern Datum jsonb_cos(PG_FUNCTION_ARGS);
extern Datum jsonb_cot(PG_FUNCTION_ARGS);
extern Datum jsonb_degrees(PG_FUNCTION_ARGS);
extern Datum jsonb_radians(PG_FUNCTION_ARGS);
extern Datum jsonb_sin(PG_FUNCTION_ARGS);
extern Datum jsonb_tan(PG_FUNCTION_ARGS);

/* string */
extern Datum jsonb_left(PG_FUNCTION_ARGS);
extern Datum jsonb_ltrim(PG_FUNCTION_ARGS);
extern Datum jsonb_replace(PG_FUNCTION_ARGS);
extern Datum jsonb_reverse(PG_FUNCTION_ARGS);
extern Datum jsonb_right(PG_FUNCTION_ARGS);
extern Datum jsonb_rtrim(PG_FUNCTION_ARGS);
extern Datum jsonb_substr_no_len(PG_FUNCTION_ARGS);
extern Datum jsonb_substr(PG_FUNCTION_ARGS);
extern Datum jsonb_tolower(PG_FUNCTION_ARGS);
extern Datum jsonb_tostring(PG_FUNCTION_ARGS);
extern Datum jsonb_toupper(PG_FUNCTION_ARGS);
extern Datum jsonb_trim(PG_FUNCTION_ARGS);
extern Datum jsonb_string_starts_with(PG_FUNCTION_ARGS);
extern Datum jsonb_string_ends_with(PG_FUNCTION_ARGS);
extern Datum jsonb_string_contains(PG_FUNCTION_ARGS);
extern Datum jsonb_string_regex(PG_FUNCTION_ARGS);
extern Datum str_size(PG_FUNCTION_ARGS);
extern Datum tostringornull(PG_FUNCTION_ARGS);
extern Datum split(PG_FUNCTION_ARGS);

/* for array supports */
extern Datum array_head(PG_FUNCTION_ARGS);
extern Datum array_last(PG_FUNCTION_ARGS);
extern Datum array_tail(PG_FUNCTION_ARGS);
extern Datum array_size(PG_FUNCTION_ARGS);
extern Datum range_2_args(PG_FUNCTION_ARGS);
extern Datum range_3_args(PG_FUNCTION_ARGS);
extern Datum jsonb_tostringlist(PG_FUNCTION_ARGS);
extern Datum array_tostringlist(PG_FUNCTION_ARGS);
extern Datum jsonb_tointegerlist(PG_FUNCTION_ARGS);
extern Datum array_tointegerlist(PG_FUNCTION_ARGS);
extern Datum array_tofloatlist(PG_FUNCTION_ARGS);
extern Datum jsonb_tofloatlist(PG_FUNCTION_ARGS);
extern Datum jsonb_array_reverse(PG_FUNCTION_ARGS);
extern Datum array_reverse(PG_FUNCTION_ARGS);
extern Datum split(PG_FUNCTION_ARGS);

/* for boolean support */
extern Datum datum_toboolean(PG_FUNCTION_ARGS);
extern Datum string_tobooleanornull(PG_FUNCTION_ARGS);
extern Datum datum_tobooleanornull(PG_FUNCTION_ARGS);

/* math */
extern Datum e(PG_FUNCTION_ARGS);

/* utility */
extern Datum get_last_graph_write_stats(PG_FUNCTION_ARGS);

/* for date and time supports */
extern Datum datetime(PG_FUNCTION_ARGS);
extern Datum localdatetime(PG_FUNCTION_ARGS);
extern Datum get_time(PG_FUNCTION_ARGS);
extern Datum get_time_for_timezone(PG_FUNCTION_ARGS);

/* compare */
extern Datum jsonb_larger(PG_FUNCTION_ARGS);
extern Datum jsonb_smaller(PG_FUNCTION_ARGS);

/* aggregate functions */
extern Datum collect_transfn(PG_FUNCTION_ARGS);
extern Datum collect_finalfn(PG_FUNCTION_ARGS);

#endif							/* CYPHER_FUNCS_H */
