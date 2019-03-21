#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_DelaySwitch()
{
    class_< USeqAct_DelaySwitch, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_DelaySwitch", no_init)
        .def_readwrite("LinkCount", &USeqAct_DelaySwitch::LinkCount)
        .def_readwrite("CurrentIdx", &USeqAct_DelaySwitch::CurrentIdx)
        .def_readwrite("SwitchDelay", &USeqAct_DelaySwitch::SwitchDelay)
        .def_readwrite("NextLinkTime", &USeqAct_DelaySwitch::NextLinkTime)
        .def("StaticClass", &USeqAct_DelaySwitch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}