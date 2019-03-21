#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStanceExpressionEvaluator()
{
    py::class_< UStanceExpressionEvaluator,  UExpressionEvaluator   >("UStanceExpressionEvaluator")
        .def_readwrite("Stance", &UStanceExpressionEvaluator::Stance)
        .def_readwrite("Option", &UStanceExpressionEvaluator::Option)
        .def("StaticClass", &UStanceExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UStanceExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}