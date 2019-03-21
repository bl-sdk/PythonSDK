#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeRandom()
{
    class_< UAnimNodeRandom, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeRandom", no_init)
        .def_readwrite("RandomInfo", &UAnimNodeRandom::RandomInfo)
        .def_readwrite("PlayingSeqNode", &UAnimNodeRandom::PlayingSeqNode)
        .def_readwrite("PendingChildIndex", &UAnimNodeRandom::PendingChildIndex)
        .def_readwrite("TargetWeight", &UAnimNodeBlendList::TargetWeight)
        .def_readwrite("BlendTimeToGo", &UAnimNodeBlendList::BlendTimeToGo)
        .def_readwrite("ActiveChildIndex", &UAnimNodeBlendList::ActiveChildIndex)
        .def_readwrite("SliderPosition", &UAnimNodeBlendList::SliderPosition)
        .def("StaticClass", &UAnimNodeRandom::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetActiveChild", &UAnimNodeBlendList::SetActiveChild)
        .staticmethod("StaticClass")
  ;
}