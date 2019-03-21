#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHUDWidget_Base()
{
    class_< UHUDWidget_Base, bases< UGFxObject >  , boost::noncopyable>("UHUDWidget_Base", no_init)
        .def_readwrite("MyHUDMovie", &UHUDWidget_Base::MyHUDMovie)
        .def("StaticClass", &UHUDWidget_Base::StaticClass, return_value_policy< reference_existing_object >())
        .def("Update", &UHUDWidget_Base::Update)
        .def("Deinit", &UHUDWidget_Base::Deinit)
        .def("Init", &UHUDWidget_Base::Init)
        .staticmethod("StaticClass")
  ;
}