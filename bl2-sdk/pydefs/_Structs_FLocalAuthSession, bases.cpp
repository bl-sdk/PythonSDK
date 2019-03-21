#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLocalAuthSession()
{
    class_< FLocalAuthSession, bases< FBaseAuthSession >  >("FLocalAuthSession", no_init)
        .def_readwrite("SessionUID", &FLocalAuthSession::SessionUID)
  ;
}