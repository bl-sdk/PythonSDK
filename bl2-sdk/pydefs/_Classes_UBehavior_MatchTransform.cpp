#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_MatchTransform()
{
    class_< UBehavior_MatchTransform, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_MatchTransform", no_init)
        .def_readwrite("AttachmentName", &UBehavior_MatchTransform::AttachmentName)
        .def_readwrite("Source", &UBehavior_MatchTransform::Source)
        .def("StaticClass", &UBehavior_MatchTransform::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_MatchTransform::ApplyBehaviorToContext)
        .def("ApplyOffsets", &UBehavior_MatchTransform::ApplyOffsets)
        .staticmethod("StaticClass")
  ;
}