#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AILookAt(py::module &m)
{
    py::class_< UWillowSeqAct_AILookAt,  USequenceAction   >(m, "UWillowSeqAct_AILookAt")
        .def_readwrite("LookAt", &UWillowSeqAct_AILookAt::LookAt)
          ;
}