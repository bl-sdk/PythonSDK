#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIResourceExpressionEvaluator(py::object m)
{
    py::class_< UAIResourceExpressionEvaluator,  UExpressionEvaluator   >(m, "UAIResourceExpressionEvaluator")
        .def_readwrite("Option", &UAIResourceExpressionEvaluator::Option)
        .def_readwrite("Resource", &UAIResourceExpressionEvaluator::Resource)
        .def("StaticClass", &UAIResourceExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UAIResourceExpressionEvaluator::Evaluate)
          ;
}