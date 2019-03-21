#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFlagExpressionEvaluator()
{
    py::class_< UFlagExpressionEvaluator,  UExpressionEvaluator   >("UFlagExpressionEvaluator")
        .def_readwrite("FlagChain", &UFlagExpressionEvaluator::FlagChain)
        .def_readwrite("FlagChainOperator", &UFlagExpressionEvaluator::FlagChainOperator)
        .def("StaticClass", &UFlagExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UFlagExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}