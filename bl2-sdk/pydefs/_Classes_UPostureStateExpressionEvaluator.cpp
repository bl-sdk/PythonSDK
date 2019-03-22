#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPostureStateExpressionEvaluator(py::module &m)
{
    py::class_< UPostureStateExpressionEvaluator,  UExpressionEvaluator   >(m, "UPostureStateExpressionEvaluator")
        .def("Evaluate", &UPostureStateExpressionEvaluator::Evaluate)
          ;
}