#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExpressionTree(py::module &m)
{
    py::class_< UExpressionTree,  UExpressionEvaluator   >(m, "UExpressionTree")
		.def_static("StaticClass", &UExpressionTree::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RootChild", &UExpressionTree::RootChild)
        .def("Evaluate", &UExpressionTree::Evaluate)
          ;
}