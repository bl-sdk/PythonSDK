#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameSkelCtrl_Recoil()
{
    class_< UGameSkelCtrl_Recoil, bases< USkelControlBase >  , boost::noncopyable>("UGameSkelCtrl_Recoil", no_init)
        .def_readwrite("Recoil", &UGameSkelCtrl_Recoil::Recoil)
        .def_readwrite("Aim", &UGameSkelCtrl_Recoil::Aim)
        .def("StaticClass", &UGameSkelCtrl_Recoil::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}