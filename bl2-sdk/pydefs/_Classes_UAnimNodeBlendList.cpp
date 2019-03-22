#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendList(py::module &m)
{
    py::class_< UAnimNodeBlendList,  UAnimNodeBlendBase   >(m, "UAnimNodeBlendList")
        .def_readwrite("TargetWeight", &UAnimNodeBlendList::TargetWeight)
        .def_readwrite("BlendTimeToGo", &UAnimNodeBlendList::BlendTimeToGo)
        .def_readwrite("ActiveChildIndex", &UAnimNodeBlendList::ActiveChildIndex)
        .def_readwrite("SliderPosition", &UAnimNodeBlendList::SliderPosition)
        .def("SetActiveChild", &UAnimNodeBlendList::SetActiveChild)
          ;
}