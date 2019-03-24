#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_ObjectList(py::module &m)
{
    py::class_< USeqVar_ObjectList,  USeqVar_Object   >(m, "USeqVar_ObjectList")
		.def_static("StaticClass", &USeqVar_ObjectList::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ObjList", &USeqVar_ObjectList::ObjList)
        .def("SetObjectValue", &USeqVar_ObjectList::SetObjectValue)
        .def("GetObjectValue", &USeqVar_ObjectList::GetObjectValue, py::return_value_policy::reference)
          ;
}