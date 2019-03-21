#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_GetServerType(py::object m)
{
    py::class_< USeqCond_GetServerType,  USequenceCondition   >(m, "USeqCond_GetServerType")
        .def("StaticClass", &USeqCond_GetServerType::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqCond_GetServerType::eventGetObjClassVersion)
          ;
}