#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExpressionEvaluator(py::module &m)
{
    py::class_< UExpressionEvaluator,  UObject   >(m, "UExpressionEvaluator")
        .def("StaticClass", &UExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UExpressionEvaluator::Evaluate)
          ;
}