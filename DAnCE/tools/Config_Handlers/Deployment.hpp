/* 
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 *
 * If you find errors or feel that there are bugfixes to be made,
 * please contact the current XSC maintainer:
 *             Will Otte <wotte@dre.vanderbilt.edu>
 */

// Fix for Borland compilers, which seem to have a broken
// <string> include.
#ifdef __BORLANDC__
# include <string.h>
#endif

#ifndef DEPLOYMENT_HPP
#define DEPLOYMENT_HPP

#include "XSC_XML_Handlers_Export.h"
// Forward declarations.
//
namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

#include <memory>
#include <string>
#include <list>
#include "ace/XML_Utils/XMLSchema/Types.hpp"
#include "ace/XML_Utils/XMLSchema/id_map.hpp"
#include "ace/Refcounted_Auto_Ptr.h"
#include "ace/Null_Mutex.h"
#include "ace/TSS_T.h"
#include "ace/ace_wchar.h"
#include "ace/Singleton.h"

#include "Basic_Deployment_Data.hpp"

#include "cpd.hpp"

#include "cdd.hpp"

#include "cdp.hpp"

#include "toplevel.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace reader
    {
      XSC_XML_Handlers_Export
      ::DAnCE::Config_Handlers::Domain
      domain (xercesc::DOMDocument const*);
    }


    namespace reader
    {
      XSC_XML_Handlers_Export
      ::DAnCE::Config_Handlers::deploymentPlan
      DeploymentPlan (xercesc::DOMDocument const*);
    }


    namespace reader
    {
      XSC_XML_Handlers_Export
      ::DAnCE::Config_Handlers::ImplementationArtifactDescription
      implementationArtifactDescription (xercesc::DOMDocument const*);
    }


    namespace reader
    {
      XSC_XML_Handlers_Export
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription
      componentInterfaceDescription (xercesc::DOMDocument const*);
    }


    namespace reader
    {
      XSC_XML_Handlers_Export
      ::DAnCE::Config_Handlers::ComponentImplementationDescription
      componentImplementationDescription (xercesc::DOMDocument const*);
    }


    namespace reader
    {
      XSC_XML_Handlers_Export
      ::DAnCE::Config_Handlers::ComponentPackageDescription
      componentPackageDescription (xercesc::DOMDocument const*);
    }


    namespace reader
    {
      XSC_XML_Handlers_Export
      ::DAnCE::Config_Handlers::PackageConfiguration
      packageConfiguration (xercesc::DOMDocument const*);
    }


    namespace reader
    {
      XSC_XML_Handlers_Export
      ::DAnCE::Config_Handlers::TopLevelPackageDescription
      topLevelPackageDescription (xercesc::DOMDocument const*);
    }
  }
}

#include "ace/XML_Utils/XMLSchema/Traversal.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace Traversal
    {
    }
  }
}

#include "ace/XML_Utils/XMLSchema/Writer.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace Writer
    {
    }
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace writer
    {
      XSC_XML_Handlers_Export
      void
      domain (::DAnCE::Config_Handlers::Domain const&, xercesc::DOMDocument*);
    }


    namespace writer
    {
      XSC_XML_Handlers_Export
      void
      DeploymentPlan (::DAnCE::Config_Handlers::deploymentPlan const&, xercesc::DOMDocument*);
    }


    namespace writer
    {
      XSC_XML_Handlers_Export
      void
      implementationArtifactDescription (::DAnCE::Config_Handlers::ImplementationArtifactDescription const&, xercesc::DOMDocument*);
    }


    namespace writer
    {
      XSC_XML_Handlers_Export
      void
      componentInterfaceDescription (::DAnCE::Config_Handlers::ComponentInterfaceDescription const&, xercesc::DOMDocument*);
    }


    namespace writer
    {
      XSC_XML_Handlers_Export
      void
      componentImplementationDescription (::DAnCE::Config_Handlers::ComponentImplementationDescription const&, xercesc::DOMDocument*);
    }


    namespace writer
    {
      XSC_XML_Handlers_Export
      void
      componentPackageDescription (::DAnCE::Config_Handlers::ComponentPackageDescription const&, xercesc::DOMDocument*);
    }


    namespace writer
    {
      XSC_XML_Handlers_Export
      void
      packageConfiguration (::DAnCE::Config_Handlers::PackageConfiguration const&, xercesc::DOMDocument*);
    }


    namespace writer
    {
      XSC_XML_Handlers_Export
      void
      topLevelPackageDescription (::DAnCE::Config_Handlers::TopLevelPackageDescription const&, xercesc::DOMDocument*);
    }
  }
}

#endif // DEPLOYMENT_HPP
