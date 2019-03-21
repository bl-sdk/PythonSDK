#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_BossBar(py::object m)
{
    py::class_< UWillowSeqAct_BossBar,  USequenceAction   >(m, "UWillowSeqAct_BossBar")
        .def_readwrite("BossActor", &UWillowSeqAct_BossBar::BossActor)
        .def("StaticClass", &UWillowSeqAct_BossBar::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_BossBar::eventActivated)
          ;
}