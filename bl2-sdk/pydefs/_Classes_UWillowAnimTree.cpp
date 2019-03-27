#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimTree(py::module &m)
{
    py::class_< UWillowAnimTree,  UAnimTree   >(m, "UWillowAnimTree")
		.def_static("StaticClass", &UWillowAnimTree::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SimpleAnimNames", &UWillowAnimTree::SimpleAnimNames)
        .def_readwrite("PreviewWeapon", &UWillowAnimTree::PreviewWeapon)
        .def_readwrite("LeftHandAnimation", &UWillowAnimTree::LeftHandAnimation)
          ;
}