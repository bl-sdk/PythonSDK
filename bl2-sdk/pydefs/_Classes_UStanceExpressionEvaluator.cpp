#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStanceExpressionEvaluator(py::module &m)
{
    py::class_< UStanceExpressionEvaluator,  UExpressionEvaluator   >(m, "UStanceExpressionEvaluator")
		.def_static("StaticClass", &UStanceExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Stance", &UStanceExpressionEvaluator::Stance)
        .def_readwrite("Option", &UStanceExpressionEvaluator::Option)
        .def("Evaluate", &UStanceExpressionEvaluator::Evaluate)
          ;
}