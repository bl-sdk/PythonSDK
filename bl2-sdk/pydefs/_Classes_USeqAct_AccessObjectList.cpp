#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AccessObjectList(py::module &m)
{
    py::class_< USeqAct_AccessObjectList,  USeqAct_SetSequenceVariable   >(m, "USeqAct_AccessObjectList")
        .def_readwrite("OutputObject", &USeqAct_AccessObjectList::OutputObject)
        .def_readwrite("ObjectIndex", &USeqAct_AccessObjectList::ObjectIndex)
        .def("StaticClass", &USeqAct_AccessObjectList::StaticClass, py::return_value_policy::reference)
          ;
}