#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIGearLikenessConsumer()
{
    class_< UIGearLikenessConsumer, bases< UInterface >  , boost::noncopyable>("UIGearLikenessConsumer", no_init)
        .def("StaticClass", &UIGearLikenessConsumer::StaticClass, return_value_policy< reference_existing_object >())
        .def("ShouldRefreshLikenessOf", &UIGearLikenessConsumer::ShouldRefreshLikenessOf)
        .def("AssumeLikenessOf", &UIGearLikenessConsumer::AssumeLikenessOf)
        .staticmethod("StaticClass")
  ;
}