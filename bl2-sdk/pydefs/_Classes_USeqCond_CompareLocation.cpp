#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareLocation(py::module &m)
{
    py::class_< USeqCond_CompareLocation,  USequenceCondition   >(m, "USeqCond_CompareLocation")
        .def_readwrite("CheckRadius", &USeqCond_CompareLocation::CheckRadius)
          ;
}