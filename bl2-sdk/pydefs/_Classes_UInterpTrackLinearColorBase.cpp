#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackLinearColorBase()
{
    class_< UInterpTrackLinearColorBase, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackLinearColorBase", no_init)
        .def_readwrite("LinearColorTrack", &UInterpTrackLinearColorBase::LinearColorTrack)
        .def_readwrite("CurveTension", &UInterpTrackLinearColorBase::CurveTension)
        .def("StaticClass", &UInterpTrackLinearColorBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}