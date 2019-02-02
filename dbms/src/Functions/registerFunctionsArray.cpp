namespace DB
{

class FunctionFactory;

void registerFunctionArray(FunctionFactory &);
void registerFunctionArrayElement(FunctionFactory &);
void registerFunctionArrayResize(FunctionFactory &);
void registerFunctionHas(FunctionFactory &);
void registerFunctionHasAll(FunctionFactory &);
void registerFunctionHasAny(FunctionFactory &);
void registerFunctionIndexOf(FunctionFactory &);
void registerFunctionCountEqual(FunctionFactory &);
void registerFunctionArrayIntersect(FunctionFactory &);
void registerFunctionArrayPushFront(FunctionFactory &);
void registerFunctionArrayPushBack(FunctionFactory &);
void registerFunctionArrayPopFront(FunctionFactory &);
void registerFunctionArrayPopBack(FunctionFactory &);
void registerFunctionArrayConcat(FunctionFactory &);
void registerFunctionArraySlice(FunctionFactory &);
void registerFunctionArrayReverse(FunctionFactory &);
void registerFunctionArrayReduce(FunctionFactory &);
void registerFunctionRange(FunctionFactory &);
void registerFunctionsEmptyArray(FunctionFactory &);
void registerFunctionEmptyArrayToSingle(FunctionFactory &);
void registerFunctionArrayEnumerate(FunctionFactory &);
void registerFunctionArrayEnumerateUniq(FunctionFactory &);
void registerFunctionArrayEnumerateDense(FunctionFactory &);
void registerFunctionArrayUniq(FunctionFactory &);
void registerFunctionArrayDistinct(FunctionFactory &);
/// my code
void registerFunctionArrayInterpolationLinear(FunctionFactory &);
/// my code


void registerFunctionsArray(FunctionFactory & factory)
{
    registerFunctionArray(factory);
    registerFunctionArrayElement(factory);
    registerFunctionArrayResize(factory);
    registerFunctionHas(factory);
    registerFunctionHasAll(factory);
    registerFunctionHasAny(factory);
    registerFunctionIndexOf(factory);
    registerFunctionCountEqual(factory);
    registerFunctionArrayIntersect(factory);
    registerFunctionArrayPushFront(factory);
    registerFunctionArrayPushBack(factory);
    registerFunctionArrayPopFront(factory);
    registerFunctionArrayPopBack(factory);
    registerFunctionArrayConcat(factory);
    registerFunctionArraySlice(factory);
    registerFunctionArrayReverse(factory);
    registerFunctionArrayReduce(factory);
    registerFunctionRange(factory);
    registerFunctionsEmptyArray(factory);
    registerFunctionEmptyArrayToSingle(factory);
    registerFunctionArrayEnumerate(factory);
    registerFunctionArrayEnumerateUniq(factory);
    registerFunctionArrayEnumerateDense(factory);
    registerFunctionArrayUniq(factory);
    registerFunctionArrayDistinct(factory);
/// my code
    registerFunctionArrayInterpolationLinear(factory);
/// my code	

}

}

