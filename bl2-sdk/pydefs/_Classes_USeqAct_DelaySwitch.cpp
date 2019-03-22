#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DelaySwitch(py::module &m)
{
    py::class_< USeqAct_DelaySwitch,  USeqAct_Latent   >(m, "USeqAct_DelaySwitch")
        .def_readwrite("LinkCount", &USeqAct_DelaySwitch::LinkCount)
        .def_readwrite("CurrentIdx", &USeqAct_DelaySwitch::CurrentIdx)
        .def_readwrite("SwitchDelay", &USeqAct_DelaySwitch::SwitchDelay)
        .def_readwrite("NextLinkTime", &USeqAct_DelaySwitch::NextLinkTime)
          ;
}