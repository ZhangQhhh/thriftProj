/**
 * Autogenerated by Thrift Compiler (0.22.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef match_TYPES_H
#define match_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>


namespace match_service {

class User;

typedef struct _User__isset {
  _User__isset() : id(false), name(false), score(false) {}
  bool id :1;
  bool name :1;
  bool score :1;
} _User__isset;

class User : public virtual ::apache::thrift::TBase {
 public:

  User(const User&);
  User& operator=(const User&);
  User() noexcept;

  virtual ~User() noexcept;
  int32_t id;
  std::string name;
  int32_t score;

  _User__isset __isset;

  void __set_id(const int32_t val);

  void __set_name(const std::string& val);

  void __set_score(const int32_t val);

  bool operator == (const User & rhs) const;
  bool operator != (const User &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const User & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot) override;
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const override;

  virtual void printTo(std::ostream& out) const;
};

void swap(User &a, User &b);

std::ostream& operator<<(std::ostream& out, const User& obj);

} // namespace

#endif
