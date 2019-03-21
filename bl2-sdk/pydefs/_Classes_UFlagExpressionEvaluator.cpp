#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFlagExpressionEvaluator()
{
    class_< UFlagExpressionEvaluator, bases< UExpressionEvaluator >  , boost::noncopyable>("UFlagExpressionEvaluator", no_init)
        .def_readwrite("FlagChain", &UFlagExpressionEvaluator::FlagChain)
        .def_readwrite("FlagChainOperator", &UFlagExpressionEvaluator::FlagChainOperator)
        .def("StaticClass", &UFlagExpressionEvaluator::StaticClass, return_value_policy< reference_existing_object >())
        .def("Evaluate", &UFlagExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}