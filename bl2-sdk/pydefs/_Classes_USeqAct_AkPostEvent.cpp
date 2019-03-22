#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkPostEvent(py::module &m)
{
    py::class_< USeqAct_AkPostEvent,  USeqAct_Latent   >(m, "USeqAct_AkPostEvent")
        .def_readwrite("ActivePlayingIds", &USeqAct_AkPostEvent::ActivePlayingIds)
        .def_readwrite("Event", &USeqAct_AkPostEvent::Event)
        .def("StaticClass", &USeqAct_AkPostEvent::StaticClass, py::return_value_policy::reference)
          ;
}