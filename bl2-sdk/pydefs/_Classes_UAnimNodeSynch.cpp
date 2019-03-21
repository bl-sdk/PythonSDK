#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeSynch()
{
    class_< UAnimNodeSynch, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeSynch", no_init)
        .def_readwrite("Groups", &UAnimNodeSynch::Groups)
        .def("StaticClass", &UAnimNodeSynch::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetGroupRateScale", &UAnimNodeSynch::SetGroupRateScale)
        .def("GetRelativePosition", &UAnimNodeSynch::GetRelativePosition)
        .def("ForceRelativePosition", &UAnimNodeSynch::ForceRelativePosition)
        .def("GetMasterNodeOfGroup", &UAnimNodeSynch::GetMasterNodeOfGroup, return_value_policy< reference_existing_object >())
        .def("RemoveNodeFromGroup", &UAnimNodeSynch::RemoveNodeFromGroup)
        .def("AddNodeToGroup", &UAnimNodeSynch::AddNodeToGroup)
        .staticmethod("StaticClass")
  ;
}