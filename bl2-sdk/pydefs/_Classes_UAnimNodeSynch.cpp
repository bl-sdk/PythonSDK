#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeSynch(py::module &m)
{
    py::class_< UAnimNodeSynch,  UAnimNodeBlendBase   >(m, "UAnimNodeSynch")
		.def_static("StaticClass", &UAnimNodeSynch::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Groups", &UAnimNodeSynch::Groups)
        .def("SetGroupRateScale", &UAnimNodeSynch::SetGroupRateScale)
        .def("GetRelativePosition", &UAnimNodeSynch::GetRelativePosition)
        .def("ForceRelativePosition", &UAnimNodeSynch::ForceRelativePosition)
        .def("GetMasterNodeOfGroup", &UAnimNodeSynch::GetMasterNodeOfGroup, py::return_value_policy::reference)
        .def("RemoveNodeFromGroup", &UAnimNodeSynch::RemoveNodeFromGroup)
        .def("AddNodeToGroup", &UAnimNodeSynch::AddNodeToGroup)
          ;
}