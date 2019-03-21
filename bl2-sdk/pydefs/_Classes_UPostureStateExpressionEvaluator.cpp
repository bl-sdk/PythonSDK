#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPostureStateExpressionEvaluator(py::object m)
{
    py::class_< UPostureStateExpressionEvaluator,  UExpressionEvaluator   >(m, "UPostureStateExpressionEvaluator")
        .def("StaticClass", &UPostureStateExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UPostureStateExpressionEvaluator::Evaluate)
          ;
}