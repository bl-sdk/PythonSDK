#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExpressionTree(py::object m)
{
    py::class_< UExpressionTree,  UExpressionEvaluator   >(m, "UExpressionTree")
        .def_readwrite("RootChild", &UExpressionTree::RootChild)
        .def("StaticClass", &UExpressionTree::StaticClass, py::return_value_policy::reference)
        .def("Evaluate", &UExpressionTree::Evaluate)
          ;
}