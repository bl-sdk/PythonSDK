#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStanceExpressionEvaluator(py::module &m)
{
    py::class_< UStanceExpressionEvaluator,  UExpressionEvaluator   >(m, "UStanceExpressionEvaluator")
        .def_readwrite("Stance", &UStanceExpressionEvaluator::Stance)
        .def_readwrite("Option", &UStanceExpressionEvaluator::Option)
        .def("Evaluate", &UStanceExpressionEvaluator::Evaluate)
          ;
}