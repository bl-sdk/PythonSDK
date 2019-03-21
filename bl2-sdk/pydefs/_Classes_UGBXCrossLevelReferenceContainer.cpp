#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXCrossLevelReferenceContainer(py::object m)
{
    py::class_< UGBXCrossLevelReferenceContainer,  UObject   >(m, "UGBXCrossLevelReferenceContainer")
        .def_readwrite("CrossLevelObjectRef", &UGBXCrossLevelReferenceContainer::CrossLevelObjectRef)
        .def("StaticClass", &UGBXCrossLevelReferenceContainer::StaticClass, py::return_value_policy::reference)
          ;
}