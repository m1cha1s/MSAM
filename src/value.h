#ifndef msam_value_h
#define msam_value_h

typedef enum {
	CHAR_VAL,
	INT_VAL,
	LONG_VAL,
	FLOAT_VAL,
	DOUBLE_VAL,
	BOOL_VAL,
	LIST_VAL,
	VECTOR_VAL,
	HASHMAP_VAL,
	FUNCTION_VAL,
} ValueType;

// TODO: add: list, vector, hashMap, function
typedef struct {
	ValueType type;
	union {
		char Char;
		int Int;
		long Long;
		float Float;
		double Double;
		bool Bool;
	} as;
} Value;

#define AS_CHAR(value) ((value.as.Char))

#endif
