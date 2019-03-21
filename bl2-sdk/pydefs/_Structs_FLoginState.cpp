#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLoginState()
{
    class_< FLoginState >("FLoginState", no_init)
        .def_readwrite("LoginName", &FLoginState::LoginName)
  ;
}