#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_GetServerType(py::module &m)
{
    py::class_< USeqCond_GetServerType,  USequenceCondition   >(m, "USeqCond_GetServerType")
        .def("eventGetObjClassVersion", &USeqCond_GetServerType::eventGetObjClassVersion)
          ;
}