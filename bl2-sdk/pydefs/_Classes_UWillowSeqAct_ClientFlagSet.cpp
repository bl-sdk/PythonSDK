#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ClientFlagSet(py::module &m)
{
    py::class_< UWillowSeqAct_ClientFlagSet,  USequenceAction   >(m, "UWillowSeqAct_ClientFlagSet")
        .def_readwrite("ClientFlagName", &UWillowSeqAct_ClientFlagSet::ClientFlagName)
        .def("eventActivated", &UWillowSeqAct_ClientFlagSet::eventActivated)
          ;
}