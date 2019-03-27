#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeRandom(py::module &m)
{
    py::class_< UAnimNodeRandom,  UAnimNodeBlendBase   >(m, "UAnimNodeRandom")
		.def_static("StaticClass", &UAnimNodeRandom::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RandomInfo", &UAnimNodeRandom::RandomInfo)
        .def_readwrite("PlayingSeqNode", &UAnimNodeRandom::PlayingSeqNode)
        .def_readwrite("PendingChildIndex", &UAnimNodeRandom::PendingChildIndex)
        .def_readwrite("TargetWeight", &UAnimNodeBlendList::TargetWeight)
        .def_readwrite("BlendTimeToGo", &UAnimNodeBlendList::BlendTimeToGo)
        .def_readwrite("ActiveChildIndex", &UAnimNodeBlendList::ActiveChildIndex)
        .def_readwrite("SliderPosition", &UAnimNodeBlendList::SliderPosition)
        .def("SetActiveChild", &UAnimNodeBlendList::SetActiveChild)
          ;
}