#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAllegianceExpressionEvaluator()
{
    py::class_< UAllegianceExpressionEvaluator,  UExpressionEvaluator   >("UAllegianceExpressionEvaluator")
        .def_readwrite("AllegianceCheck", &UAllegianceExpressionEvaluator::AllegianceCheck)
        .def_readwrite("Allegiance", &UAllegianceExpressionEvaluator::Allegiance)
        .def("StaticClass", &UAllegianceExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UAllegianceExpressionEvaluator::Evaluate)
        .staticmethod("StaticClass")
  ;
}