#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyObjectList(py::object m)
{
    py::class_< USeqAct_ModifyObjectList,  USeqAct_SetSequenceVariable   >(m, "USeqAct_ModifyObjectList")
        .def_readwrite("ListEntriesCount", &USeqAct_ModifyObjectList::ListEntriesCount)
        .def("StaticClass", &USeqAct_ModifyObjectList::StaticClass, py::return_value_policy::reference)
          ;
}