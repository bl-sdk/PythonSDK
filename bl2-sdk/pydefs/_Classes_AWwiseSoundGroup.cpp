#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWwiseSoundGroup()
{
    class_< AWwiseSoundGroup, bases< AKeypoint >  , boost::noncopyable>("AWwiseSoundGroup", no_init)
        .def_readwrite("VfTable_IISpecialOcclusionProvider", &AWwiseSoundGroup::VfTable_IISpecialOcclusionProvider)
        .def_readwrite("VfTable_IISpecialOcclusionAccumulator", &AWwiseSoundGroup::VfTable_IISpecialOcclusionAccumulator)
        .def_readwrite("Members", &AWwiseSoundGroup::Members)
        .def_readwrite("ActiveOccluders", &AWwiseSoundGroup::ActiveOccluders)
        .def("StaticClass", &AWwiseSoundGroup::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveOcclusionProvider", &AWwiseSoundGroup::RemoveOcclusionProvider)
        .def("SetOcclusionForProvider", &AWwiseSoundGroup::SetOcclusionForProvider)
        .def("GetOcclusionAmount", &AWwiseSoundGroup::GetOcclusionAmount)
        .def("SetAkSwitchObject", &AWwiseSoundGroup::SetAkSwitchObject)
        .def("SetRTPCObjectValue", &AWwiseSoundGroup::SetRTPCObjectValue)
        .staticmethod("StaticClass")
  ;
}