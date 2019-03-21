#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyle()
{
    class_< UGFxMovieDrawStyle, bases< UObject >  , boost::noncopyable>("UGFxMovieDrawStyle", no_init)
        .def_readwrite("Movie", &UGFxMovieDrawStyle::Movie)
        .def_readwrite("TargetActor", &UGFxMovieDrawStyle::TargetActor)
        .def_readonly("UnknownData00", &UGFxMovieDrawStyle::UnknownData00)
        .def("StaticClass", &UGFxMovieDrawStyle::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetStyleDebugString", &UGFxMovieDrawStyle::GetStyleDebugString)
        .staticmethod("StaticClass")
  ;
}