#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFloatMaterialParam()
{
    class_< UInterpTrackInstFloatMaterialParam, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstFloatMaterialParam", no_init)
        .def_readwrite("MICInfos", &UInterpTrackInstFloatMaterialParam::MICInfos)
        .def_readwrite("InstancedTrack", &UInterpTrackInstFloatMaterialParam::InstancedTrack)
        .def("StaticClass", &UInterpTrackInstFloatMaterialParam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}