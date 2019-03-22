#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXObjectList(py::module &m)
{
    py::class_< UGBXObjectList,  UObject   >(m, "UGBXObjectList")
        .def_readwrite("ObjectList", &UGBXObjectList::ObjectList)
        .def("StaticClass", &UGBXObjectList::StaticClass, py::return_value_policy::reference)
        .def("RemoveObjectsOfClass", &UGBXObjectList::RemoveObjectsOfClass)
        .def("FindNextObjectByClass", &UGBXObjectList::FindNextObjectByClass, py::return_value_policy::reference)
        .def("FindFirstObjectByClass", &UGBXObjectList::FindFirstObjectByClass, py::return_value_policy::reference)
        .def("RemoveObject", &UGBXObjectList::RemoveObject)
        .def("AddObject", &UGBXObjectList::AddObject)
          ;
}