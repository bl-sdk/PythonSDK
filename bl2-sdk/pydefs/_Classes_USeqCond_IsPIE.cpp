#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsPIE(py::module &m)
{
    py::class_< USeqCond_IsPIE,  USequenceCondition   >(m, "USeqCond_IsPIE")
        .def("eventGetObjClassVersion", &USeqCond_IsPIE::eventGetObjClassVersion)
          ;
}