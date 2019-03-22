#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExpressionEvaluator(py::module &m)
{
    py::class_< UExpressionEvaluator,  UObject   >(m, "UExpressionEvaluator")
        .def("Evaluate", &UExpressionEvaluator::Evaluate)
          ;
}