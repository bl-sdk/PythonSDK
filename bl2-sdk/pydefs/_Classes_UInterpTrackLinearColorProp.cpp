#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackLinearColorProp()
{
    class_< UInterpTrackLinearColorProp, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackLinearColorProp", no_init)
        .def_readwrite("PropertyName", &UInterpTrackLinearColorProp::PropertyName)
        .def_readwrite("LinearColorTrack", &UInterpTrackLinearColorBase::LinearColorTrack)
        .def_readwrite("CurveTension", &UInterpTrackLinearColorBase::CurveTension)
        .def("StaticClass", &UInterpTrackLinearColorProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}