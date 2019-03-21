#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstVectorMaterialParam()
{
    class_< UInterpTrackInstVectorMaterialParam, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstVectorMaterialParam", no_init)
        .def_readwrite("MICInfos", &UInterpTrackInstVectorMaterialParam::MICInfos)
        .def_readwrite("InstancedTrack", &UInterpTrackInstVectorMaterialParam::InstancedTrack)
        .def("StaticClass", &UInterpTrackInstVectorMaterialParam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}